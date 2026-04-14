@class OADConnection;

@interface OADConnectorProperties : OADShapeProperties {
    OADConnection *mFrom;
    OADConnection *mTo;
}

+ (id)defaultProperties;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDefaults;
- (id)init;
- (id)from;
- (id)to;

@end
