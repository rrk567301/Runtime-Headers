@class NSData, NSString, NSFileHandle;

@interface CHUISWatchComplicationsWidgetSnapshotMetadataLabelData : NSObject <NSCopying, BSXPCSecureCoding> {
    NSData *_data;
    NSFileHandle *_dataFileHandle;
}

@property (readonly, retain, nonatomic) NSData *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)supportsBSXPCSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)copyForEncodingAtUrlDirectory:(id)a0;
- (id)dataFileHandle;

@end
