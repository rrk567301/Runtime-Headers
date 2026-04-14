@class NSData;

@interface ProtoDataExtractor.DillProvisional : SISchemaTopLevelUnionType {
    void /* unknown type, empty encoding */ dillData;
    void /* unknown type, empty encoding */ eventId;
    void /* unknown type, empty encoding */ version;
}

@property (nonatomic, readonly) NSData *data;

- (id)initWithData:(id)a0;
- (int)getAnyEventType;
- (BOOL)isProvisional;
- (id)init;
- (id)qualifiedMessageName;
- (id)getTypeId;
- (id)getVersion;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
