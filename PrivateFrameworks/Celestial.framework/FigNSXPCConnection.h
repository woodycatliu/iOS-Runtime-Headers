/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSObject<OS_dispatch_group>;

@interface FigNSXPCConnection : NSXPCConnection {
    NSObject<OS_dispatch_group> *_connectionRunningGroup;
    BOOL _explicitlyInvalidated;
}

@property(readonly) BOOL explicitlyInvalidated;

- (void)blockUntilInvalidateHandlerHasBeenCalled;
- (void)dealloc;
- (BOOL)explicitlyInvalidated;
- (void)invalidate;
- (void)resume;
- (void)setInvalidationHandler:(id)arg1;

@end