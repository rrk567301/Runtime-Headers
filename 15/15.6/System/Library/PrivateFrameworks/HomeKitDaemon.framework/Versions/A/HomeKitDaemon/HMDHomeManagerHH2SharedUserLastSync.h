@class NSUUID, HMDUser, NSData, NSDate, NSString;

@interface HMDHomeManagerHH2SharedUserLastSync : HMFObject {
    NSDate *_creationDate;
    NSString *_archivePath;
}

@property (retain) NSUUID *homeUUID;
@property (retain) HMDUser *user;
@property (readonly, getter=isValid) char valid;
@property (readonly) NSDate *creationDate;
@property (readonly) NSData *archive;

+ (id)shortDescription;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)shortDescription;
- (id)privateDescription;
- (void)configure;
- (id)attributeDescriptions;
- (id)initWithArchivePath:(id)a0;
- (void)removeArchiveFromLocalDisk;

@end
