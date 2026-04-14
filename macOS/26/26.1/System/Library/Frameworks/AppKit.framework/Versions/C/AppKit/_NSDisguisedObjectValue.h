@interface _NSDisguisedObjectValue : NSObject {
    void *_disguisedReference;
}

@property (readonly) id objectValue;

+ (id)conditionallyDisguise:(BOOL)a0 object:(id)a1;
+ (id)conditionallyReveal:(BOOL)a0 object:(id)a1;

- (id)initWithObject:(id)a0;
- (void)dealloc;

@end
