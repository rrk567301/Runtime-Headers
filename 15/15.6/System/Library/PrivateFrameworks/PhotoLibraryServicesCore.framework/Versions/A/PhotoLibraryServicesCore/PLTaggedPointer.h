@interface PLTaggedPointer : NSObject {
    union { unsigned long long unsignedPayload; long long signedPayload; } _payload;
}

+ (unsigned short)tag;
+ (id)newInstanceWithPayload:(unsigned long long)a0;
+ (id)newInstanceWithSignedPayload:(long long)a0;
+ (char)taggedPointersEnabled;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithPayload:(unsigned long long)a0;
- (unsigned long long)payload;
- (char)isTaggedPointer;
- (id)initWithSignedPayload:(long long)a0;
- (long long)signedPayload;

@end
