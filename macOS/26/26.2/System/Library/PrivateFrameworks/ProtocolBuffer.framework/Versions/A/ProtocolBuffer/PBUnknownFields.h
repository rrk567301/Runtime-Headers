@interface PBUnknownFields : NSObject {
    char *_buf;
    unsigned long long _bufSpace;
    unsigned long long _bufLen;
    unsigned long long _recursionDepth;
}

- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)dealloc;

@end
