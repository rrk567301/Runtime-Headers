@interface PLTaggedPointer : NSObject {
    union { unsigned long long unsignedPayload; long long signedPayload; } _payload;
}

+ (unsigned short)tag;
+ (id)newInstanceWithPayload:(unsigned long long)a0;
+ (id)newInstanceWithSignedPayload:(long long)a0;
+ (BOOL)taggedPointersEnabled;

- (unsigned long long)payload;
- (unsigned long long)hash;
- (id)initWithPayload:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (long long)signedPayload;
- (BOOL)isTaggedPointer;
- (id)initWithSignedPayload:(long long)a0;

@end
