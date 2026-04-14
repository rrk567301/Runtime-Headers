@class NSString, NSMutableSet;

@interface CNHandleBlockingTestDouble : NSObject <CNHandleBlocking> {
    NSMutableSet *_handles;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)normalizeHandle:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (BOOL)isHandleBlocked:(id)a0;
- (void)setBlocked:(BOOL)a0 forHandle:(id)a1;
- (id)areHandlesBlocked:(id)a0;

@end
