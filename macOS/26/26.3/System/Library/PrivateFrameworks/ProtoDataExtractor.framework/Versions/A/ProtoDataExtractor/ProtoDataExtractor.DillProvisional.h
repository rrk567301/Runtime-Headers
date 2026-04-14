@class NSData;

@interface ProtoDataExtractor.DillProvisional : SISchemaTopLevelUnionType {
    void /* unknown type, empty encoding */ dillData;
    void /* unknown type, empty encoding */ eventId;
    void /* unknown type, empty encoding */ version;
}

@property (nonatomic, readonly) NSData *data;

- (id)qualifiedMessageName;
- (int)getAnyEventType;
- (id)initWithData:(id)a0;
- (id)getTypeId;
- (id)init;
- (BOOL)isProvisional;
- (id)getVersion;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
