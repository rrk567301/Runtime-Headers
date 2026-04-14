@class NSMutableDictionary;

@interface NWEntityMapperStaticAssignment : NWEntityMapper {
    NSMutableDictionary *_staticUUIDToBundleIDMap;
}

- (void).cxx_destruct;
- (id)identifierForUUID:(id)a0 derivation:(int *)a1;
- (id)initWithFlavor:(id)a0;

@end
