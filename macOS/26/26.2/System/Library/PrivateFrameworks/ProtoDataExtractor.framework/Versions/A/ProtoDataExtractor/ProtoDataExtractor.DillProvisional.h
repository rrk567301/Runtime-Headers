@class NSData;

@interface ProtoDataExtractor.DillProvisional : SISchemaTopLevelUnionType {
    void /* unknown type, empty encoding */ dillData;
    void /* unknown type, empty encoding */ eventId;
    void /* unknown type, empty encoding */ version;
}

@property (nonatomic, readonly) NSData *data;

- (id)getVersion;
- (BOOL)isProvisional;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)qualifiedMessageName;
- (void).cxx_destruct;
- (int)getAnyEventType;
- (id)getTypeId;
- (id)init;

@end
