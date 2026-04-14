@class NSMutableArray;

@interface _NSRuleEditorViewUnboundRowHolder : NSObject <NSCoding> {
    NSMutableArray *boundArray;
}

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;

@end
