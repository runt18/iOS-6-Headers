/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "SBRelaunchAppWorkspaceTransaction.h"

#import "SBUIAnimationControllerDelegate-Protocol.h"

@class SBUIAnimationController, SSKeybagRequest;

@interface SBKeybagNonsenseWorkspaceTransaction : SBRelaunchAppWorkspaceTransaction <SBUIAnimationControllerDelegate>
{
    SSKeybagRequest *_keybagRequest;
    SBUIAnimationController *_animationController;
}

- (void)animationControllerDidFinishAnimation:(id)arg1;
- (void)animationController:(id)arg1 didCommitAnimation:(BOOL)arg2 withDuration:(double)arg3 afterDelay:(double)arg4;
- (void)animationController:(id)arg1 willBeginAnimation:(BOOL)arg2;
- (void)_handleAppRelaunch:(id)arg1;
- (void)_interrupt;
- (BOOL)_canBeInterrupted;
- (void)_completeKeybagRefetchForApp:(id)arg1;
- (void)_transactionComplete;
- (void)_commit;
- (void)_endAnimation;
- (BOOL)shouldPerformToAppStateCleanupOnCompletion;
- (BOOL)_shouldBeWatchdogged:(id *)arg1;
- (void)dealloc;
- (id)initWithWorkspace:(id)arg1 alertManager:(id)arg2 application:(id)arg3;

@end
