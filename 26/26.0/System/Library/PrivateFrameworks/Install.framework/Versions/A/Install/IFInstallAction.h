@interface IFInstallAction : NSObject {
    struct IFInstallAction_Private { id x0; BOOL x1; BOOL x2; BOOL x3; int x4; id x5; id x6; id x7; } *_private;
}

- (BOOL)visible;
- (void)setVisible:(BOOL)a0;
- (void)setSelected:(BOOL)a0;
- (id)identifier;
- (void)dealloc;
- (void)setEnabled:(BOOL)a0;
- (BOOL)enabled;
- (id)init;
- (void)setEngine:(id)a0;
- (id)title;
- (BOOL)selected;
- (void)resolveState;
- (id)errorDictionary;
- (id)actionSpecificMetadata;
- (int)failType;
- (id)functionNameForAttr:(id)a0;
- (BOOL)loadFromXMLElement:(id)a0 scripts:(id)a1;
- (int)requiredAuth;
- (id)resolvedNumberForAttr:(id)a0;
- (id)resolvedStringForAttr:(id)a0;
- (BOOL)runWithQueueElement:(id)a0;
- (void)setFailType:(int)a0;
- (id)writableActionSpecificMetadataDictionary;

@end
