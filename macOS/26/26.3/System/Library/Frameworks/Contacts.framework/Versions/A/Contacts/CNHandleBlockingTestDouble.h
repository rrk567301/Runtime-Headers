@class NSString, NSMutableSet;

@interface CNHandleBlockingTestDouble : NSObject <CNHandleBlocking> {
    NSMutableSet *_handles;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)normalizeHandle:(id)a0;

@end
