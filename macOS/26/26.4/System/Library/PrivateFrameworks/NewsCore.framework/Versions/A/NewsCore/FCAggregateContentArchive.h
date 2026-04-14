@class NSArray;

@interface FCAggregateContentArchive : FCContentArchive {
    NSArray *_childArchives;
}

+ (BOOL)supportsSecureCoding;

- (long long)storageSize;
- (id)manifest;
- (void)encodeWithCoder:(id)a0;
- (id)unarchiveIntoContentContext:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
