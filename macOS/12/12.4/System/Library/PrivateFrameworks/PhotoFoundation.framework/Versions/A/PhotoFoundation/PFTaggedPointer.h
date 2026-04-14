@interface PFTaggedPointer : NSObject {
    union { unsigned long long unsignedPayload; long long signedPayload; } _payload;
}

+ (unsigned short)tag;
+ (BOOL)taggedPointersEnabled;
+ (id)newInstanceWithPayload:(unsigned long long)a0;
+ (id)newInstanceWithSignedPayload:(long long)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithPayload:(unsigned long long)a0;
- (unsigned long long)payload;
- (long long)signedPayload;
- (id)initWithSignedPayload:(long long)a0;
- (BOOL)isTaggedPointer;

@end
