@class NSString, NSObject;

@interface FI_TGoToFinderItem : NSObject <TGoToItemProtocol>

@property (retain, nonatomic) NSString *decomposedRawName;
@property (retain, nonatomic) NSString *decomposedName;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) BOOL isContainer;
@property (nonatomic) BOOL isShortcut;
@property (retain, nonatomic) NSObject *representedObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithFENode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (BOOL)isEqualToGoToFinderItem:(id)a0;

@end
