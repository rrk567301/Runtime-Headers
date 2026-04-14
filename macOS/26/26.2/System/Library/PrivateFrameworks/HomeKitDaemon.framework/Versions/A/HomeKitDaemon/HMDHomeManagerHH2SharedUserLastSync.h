@class NSUUID, HMDUser, NSData, NSDate, NSString;

@interface HMDHomeManagerHH2SharedUserLastSync : HMFObject {
    NSDate *_creationDate;
    NSString *_archivePath;
}

@property (retain) NSUUID *homeUUID;
@property (retain) HMDUser *user;
@property (readonly, getter=isValid) BOOL valid;
@property (readonly) NSDate *creationDate;
@property (readonly) NSData *archive;

+ (id)shortDescription;

- (void)configure;
- (id)shortDescription;
- (id)privateDescription;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)description;
- (id)initWithArchivePath:(id)a0;
- (void)removeArchiveFromLocalDisk;

@end
