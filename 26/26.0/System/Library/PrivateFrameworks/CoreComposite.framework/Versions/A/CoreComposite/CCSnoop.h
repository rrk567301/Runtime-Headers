@class CCSnoopData;

@interface CCSnoop : NSObject {
    id _realObject;
    CCSnoopData *_result;
}

+ (BOOL)isEnabled;

- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithRealObject:(id)a0 forResult:(id)a1;

@end
