@class NSArray;

@interface FCAggregateContentArchive : FCContentArchive {
    NSArray *_childArchives;
}

+ (BOOL)supportsSecureCoding;

- (long long)storageSize;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)unarchiveIntoContentContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)manifest;
- (void).cxx_destruct;

@end
