@class NSString, NSDictionary;

@interface WFShowActionInterfaceDialogRequest : WFDialogRequest <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *actionClassName;
@property (readonly, copy, nonatomic) NSDictionary *classNamesByType;
@property (readonly, nonatomic) char isCatalystInterfaceRequest;
@property (readonly, nonatomic) NSString *catalystInterfaceClassName;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithActionClassName:(id)a0 classNamesByType:(id)a1 attribution:(id)a2;

@end
