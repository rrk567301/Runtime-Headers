@class OADConnection;

@interface OADConnectorProperties : OADShapeProperties {
    OADConnection *mFrom;
    OADConnection *mTo;
}

+ (id)defaultProperties;

- (void).cxx_destruct;
- (id)initWithDefaults;
- (id)init;
- (id)description;
- (id)from;
- (id)to;

@end
