@class NSData;

@interface ProtoDataExtractor.DillSiriInstrumentationWrapper : SISchemaTopLevelUnionType {
    void /* unknown type, empty encoding */ dillData;
    void /* unknown type, empty encoding */ anyEventType;
}

@property (nonatomic, readonly) NSData *data;

- (id)qualifiedMessageName;
- (int)getAnyEventType;
- (id)initWithData:(id)a0;
- (id)init;
- (BOOL)isProvisional;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
