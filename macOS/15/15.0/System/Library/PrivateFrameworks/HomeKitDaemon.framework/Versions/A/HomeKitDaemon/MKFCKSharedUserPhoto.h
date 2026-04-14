@class NSData, MKFCKSharedUserDataRoot;

@interface MKFCKSharedUserPhoto : MKFCKSharedUserData

@property (retain, nonatomic) NSData *photoData;
@property (retain, nonatomic) MKFCKSharedUserDataRoot *root;

+ (id)fetchRequest;

@end
