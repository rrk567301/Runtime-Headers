@class NSData;

@interface ProtoDataExtractor.DillSiriInstrumentationWrapper : SISchemaTopLevelUnionType {
    void /* unknown type, empty encoding */ dillData;
    void /* unknown type, empty encoding */ anyEventType;
}

@property (nonatomic, readonly) NSData *data;

- (id)initWithData:(id)a0;
- (int)getAnyEventType;
- (BOOL)isProvisional;
- (id)init;
- (id)qualifiedMessageName;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
