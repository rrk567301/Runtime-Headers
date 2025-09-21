@interface UPEmbedding : NSObject {
    void *_embedding;
}

- (void)dealloc;
- (id)description;
- (id)initWithCoordinates:(id)a0;
- (id)getCoordinates;
- (unsigned long long)getDimension;
- (id)initWithProtobufEmbeddings:(id)a0 forTokenAt:(int)a1 error:(id *)a2;

@end
