@class NSString, NSImage, CNContact;

@interface FIAirDropListViewItem : FI_TTableViewItem

@property (nonatomic) NSString *stateText;
@property (nonatomic) double percentComplete;
@property (nonatomic, getter=isCancellable) BOOL cancellable;
@property (nonatomic, getter=isIndeterminateProgress) BOOL indeterminateProgress;
@property (readonly, nonatomic) struct TFENode { struct OpaqueNodeRef *fNodeRef; } node;
@property (readonly, nonatomic) NSString *machineName;
@property (readonly, nonatomic) NSString *personName;
@property (readonly, nonatomic) NSImage *icon;
@property (readonly, nonatomic) CNContact *contact;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)update:(id)a0 darkBackground:(BOOL)a1;
- (void)updatePersonName;

@end
