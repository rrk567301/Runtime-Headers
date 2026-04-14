@class NSMutableArray;

@interface _NSRuleEditorViewUnboundRowHolder : NSObject <NSCoding> {
    NSMutableArray *boundArray;
}

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
