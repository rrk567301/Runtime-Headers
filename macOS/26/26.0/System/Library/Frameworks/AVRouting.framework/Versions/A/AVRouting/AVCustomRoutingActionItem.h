@class NSString, UTType;

@interface AVCustomRoutingActionItem : NSObject {
    NSString *_identifier;
}

@property (copy, nonatomic) UTType *type;
@property (copy, nonatomic) NSString *overrideTitle;

- (id)identifier;
- (void)dealloc;
- (id)init;
- (void)setIdentifier:(id)a0;

@end
