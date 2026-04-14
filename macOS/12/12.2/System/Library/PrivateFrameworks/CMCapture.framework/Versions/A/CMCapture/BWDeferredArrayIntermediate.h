@class NSArray;

@interface BWDeferredArrayIntermediate : BWDeferredDataIntermediate {
    NSArray *_array;
}

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (int)flush;
- (int)setArchive:(id)a0;
- (id)archive:(int *)a0;
- (id)initWithArray:(id)a0 tag:(id)a1 URL:(id)a2;
- (int)setURL:(id)a0 prefetchQueue:(id)a1;
- (id)fetchWithCustomClassesAndRetain:(id)a0 err:(int *)a1;

@end
