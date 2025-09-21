@interface ChronoCore.LocationGraceRegistry : _TtCs12_SwiftObject <BSSharedMemoryStoreData> {
    void /* unknown type, empty encoding */ timeoutByIdentifier;
}

@property (nonatomic, readonly) long long serializedDataLength;

+ (id)deserializeFromReader:(id /* block */)a0;

- (id)copyWithZone:(void *)a0;
- (char)isEqual:(id)a0;
- (char)serializeToWriter:(id /* block */)a0;

@end
