@class NSString, NSMutableDictionary;

@interface ICCameraItemProxy : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int objectHandle;
@property (nonatomic) unsigned int parentObjectHandle;
@property (nonatomic) unsigned int storageID;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned int type;
@property (nonatomic) BOOL topLevel;
@property (nonatomic) BOOL readOnly;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) unsigned long long size;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;
@property (nonatomic) unsigned int orientation;
@property (nonatomic) BOOL hasThumbnail;
@property (nonatomic) unsigned long long captureDate;
@property (nonatomic) unsigned long long modificationDate;
@property (retain, nonatomic) NSMutableDictionary *keywords;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
