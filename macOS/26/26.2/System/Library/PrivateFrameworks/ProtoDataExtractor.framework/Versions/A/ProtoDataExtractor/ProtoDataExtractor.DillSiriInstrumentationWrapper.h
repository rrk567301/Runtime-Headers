@class NSData;

@interface ProtoDataExtractor.DillSiriInstrumentationWrapper : SISchemaTopLevelUnionType {
    void /* unknown type, empty encoding */ dillData;
    void /* unknown type, empty encoding */ anyEventType;
}

@property (nonatomic, readonly) NSData *data;

- (BOOL)isProvisional;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)qualifiedMessageName;
- (void).cxx_destruct;
- (int)getAnyEventType;
- (id)init;

@end
