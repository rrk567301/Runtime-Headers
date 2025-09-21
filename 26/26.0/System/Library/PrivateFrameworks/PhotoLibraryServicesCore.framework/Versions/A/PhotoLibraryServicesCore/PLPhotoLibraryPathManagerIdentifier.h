@class NSString;

@interface PLPhotoLibraryPathManagerIdentifier : NSObject <NSCopying>

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned char bundleFormat;

- (id)initWithPathManager:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqualToPathManagerIdentifier:(id)a0;
- (unsigned long long)hash;
- (id)initWithLibraryID:(id)a0 libraryFormat:(unsigned char)a1;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
