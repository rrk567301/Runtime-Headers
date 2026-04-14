@class NSString, UTType;

@interface AVCustomRoutingActionItem : NSObject {
    NSString *_identifier;
}

@property (copy, nonatomic) UTType *type;
@property (copy, nonatomic) NSString *overrideTitle;

- (id)init;
- (void).cxx_destruct;
- (id)identifier;
- (void)setIdentifier:(id)a0;

@end
