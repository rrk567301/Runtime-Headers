@interface VMUAttributeGraphTypeIdentifier : NSObject {
    void /* unknown type, empty encoding */ swiftValueInAttributeGraphAddressesToTypeMetadata;
    void /* unknown type, empty encoding */ attributeGraphSwiftMetadataToClassInfo;
    void /* unknown type, empty encoding */ objectIdentifier;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithObjectIdentifier:(id)a0;
- (id)classInfoForAttributeGraphValueWithMetadata:(unsigned long long)a0;
- (unsigned long long)metadataPointerForAllocation:(unsigned long long)a0;

@end
