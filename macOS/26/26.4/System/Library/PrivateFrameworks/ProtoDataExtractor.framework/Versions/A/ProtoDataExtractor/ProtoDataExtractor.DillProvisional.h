@class NSData;

@interface ProtoDataExtractor.DillProvisional : SISchemaTopLevelUnionType {
    void /* unknown type, empty encoding */ dillData;
    void /* unknown type, empty encoding */ eventId;
    void /* unknown type, empty encoding */ version;
}

@property (nonatomic, readonly) NSData *data;

- (BOOL)isProvisional;
- (int)getAnyEventType;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)getTypeId;
- (id)qualifiedMessageName;
- (id)initWithCoder:(id)a0;
- (id)getVersion;

@end
