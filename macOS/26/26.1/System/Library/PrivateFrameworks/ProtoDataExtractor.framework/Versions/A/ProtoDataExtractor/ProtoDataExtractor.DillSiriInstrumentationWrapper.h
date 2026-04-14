@class NSData;

@interface ProtoDataExtractor.DillSiriInstrumentationWrapper : SISchemaTopLevelUnionType {
    void /* unknown type, empty encoding */ dillData;
    void /* unknown type, empty encoding */ anyEventType;
}

@property (nonatomic, readonly) NSData *data;

- (BOOL)isProvisional;
- (id)initWithData:(id)a0;
- (id)qualifiedMessageName;
- (int)getAnyEventType;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
