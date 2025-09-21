@class NSArray;

@interface FCAggregateContentArchive : FCContentArchive {
    NSArray *_childArchives;
}

+ (char)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)manifest;
- (long long)storageSize;
- (id)unarchiveIntoContentContext:(id)a0;

@end
