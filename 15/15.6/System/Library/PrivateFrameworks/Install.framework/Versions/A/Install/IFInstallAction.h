@interface IFInstallAction : NSObject {
    struct IFInstallAction_Private { id x0; char x1; char x2; char x3; int x4; id x5; id x6; id x7; } *_private;
}

- (void)dealloc;
- (id)init;
- (char)enabled;
- (id)identifier;
- (void)setEnabled:(char)a0;
- (id)title;
- (char)selected;
- (void)setSelected:(char)a0;
- (void)setVisible:(char)a0;
- (char)visible;
- (void)setEngine:(id)a0;
- (void)resolveState;
- (id)errorDictionary;
- (id)actionSpecificMetadata;
- (int)failType;
- (id)functionNameForAttr:(id)a0;
- (char)loadFromXMLElement:(id)a0 scripts:(id)a1;
- (int)requiredAuth;
- (id)resolvedNumberForAttr:(id)a0;
- (id)resolvedStringForAttr:(id)a0;
- (char)runWithQueueElement:(id)a0;
- (void)setFailType:(int)a0;
- (id)writableActionSpecificMetadataDictionary;

@end
