@class NSArray, BRFileObjectID;

@interface BRProgressUpdate : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) BRFileObjectID *folderID;
@property (nonatomic) unsigned long long uploadCompletedSize;
@property (nonatomic) unsigned long long uploadTotalSize;
@property (nonatomic) unsigned long long downloadCompletedSize;
@property (nonatomic) unsigned long long downloadTotalSize;
@property (copy, nonatomic) NSArray *parentFileIDs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
