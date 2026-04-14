@class NSData, NSString;

@interface AVBMACAddress : NSObject <NSCopying> {
    unsigned char _bytes[6];
}

@property (readonly) const char *bytes;
@property (copy) NSData *dataRepresentation;
@property (copy) NSString *stringRepresentation;
@property (getter=isMulticast) BOOL multicast;

+ (id)maapRandomAssign;
+ (id)keyPathsForValuesAffectingDataRepresentation;
+ (id)keyPathsForValuesAffectingStringRepresentation;
+ (id)keyPathsForValuesAffectingMulticast;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (const char *)bytes;
- (id)dataRepresentation;
- (id)stringRepresentation;
- (void)setMulticast:(BOOL)a0;
- (void)getAddress:(char *)a0;
- (id)initWithBytes:(const char *)a0;
- (void)setDataRepresentation:(id)a0;
- (void)setStringRepresentation:(id)a0;
- (void)_willUpdateBytes;
- (void)_didUpdateBytes;

@end
