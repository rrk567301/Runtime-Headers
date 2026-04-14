@class NSArray, NSString, WFDialogButton;

@interface WFChooseFromListDialogRequest : WFDialogRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *items;
@property (readonly, nonatomic) BOOL allowsMultipleSelection;
@property (readonly, copy, nonatomic) NSString *message;
@property (readonly, copy, nonatomic) NSString *emptyStateMessage;
@property (readonly, copy, nonatomic) WFDialogButton *doneButton;
@property (readonly, copy, nonatomic) WFDialogButton *cancelButton;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithItems:(id)a0 allowsMultipleSelection:(BOOL)a1 message:(id)a2 attribution:(id)a3 prompt:(id)a4;

@end
