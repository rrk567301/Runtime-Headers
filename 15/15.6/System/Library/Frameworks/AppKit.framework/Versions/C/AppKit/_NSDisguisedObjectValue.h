@interface _NSDisguisedObjectValue : NSObject {
    void *_disguisedReference;
}

@property (readonly) id objectValue;

+ (id)conditionallyDisguise:(char)a0 object:(id)a1;
+ (id)conditionallyReveal:(char)a0 object:(id)a1;

- (void)dealloc;
- (id)initWithObject:(id)a0;

@end
