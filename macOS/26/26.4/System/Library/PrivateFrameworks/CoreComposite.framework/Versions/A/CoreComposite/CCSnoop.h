@class CCSnoopData;

@interface CCSnoop : NSObject {
    id _realObject;
    CCSnoopData *_result;
}

+ (BOOL)isEnabled;

- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)initWithRealObject:(id)a0 forResult:(id)a1;

@end
