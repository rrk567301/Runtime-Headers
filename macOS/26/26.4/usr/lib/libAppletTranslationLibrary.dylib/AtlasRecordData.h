@class NSData;

@interface AtlasRecordData : NSObject

@property unsigned char sfi;
@property unsigned char recordId;
@property (retain) NSData *content;

- (void).cxx_destruct;
- (id)description;

@end
