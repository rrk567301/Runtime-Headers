@class NSString, NSArray;

@interface MADAutoAvailableForStaging : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSString *targetOSVersion;
@property (readonly, retain, nonatomic) NSString *targetBuild;
@property (readonly, retain, nonatomic) NSString *targetTrainName;
@property (readonly, retain, nonatomic) NSString *targetRestoreVersion;
@property (readonly, retain, nonatomic) NSArray *targetGroupNames;
@property (retain, nonatomic) NSArray *descriptorsRequiredForStaging;
@property (retain, nonatomic) NSArray *descriptorsOptionalForStaging;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)summary;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initForTargetOSVersion:(id)a0 forTargetBuild:(id)a1 forTargetTrainName:(id)a2 forTargetRestoreVersion:(id)a3 withRequiredDescriptors:(id)a4 withOptionalDescriptors:(id)a5;
- (id)newSummaryWithoutEntryID;

@end
