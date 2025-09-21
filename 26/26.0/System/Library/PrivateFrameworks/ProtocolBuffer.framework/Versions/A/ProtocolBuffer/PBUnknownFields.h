@interface PBUnknownFields : NSObject {
    char *_buf;
    unsigned long long _bufSpace;
    unsigned long long _bufLen;
    unsigned long long _recursionDepth;
}

- (void)dealloc;
- (id)dictionaryRepresentation;
- (id)description;
- (void)writeTo:(id)a0;

@end
