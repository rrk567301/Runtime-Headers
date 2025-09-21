@class NSString, NSData, NSURL, _BlastDoorLPAudioProperties;

@interface _BlastDoorLPAudio : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSString *MIMEType;
@property (retain, nonatomic) NSURL *streamingURL;
@property (copy, nonatomic) _BlastDoorLPAudioProperties *properties;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithAudio:(id)a0;
- (unsigned long long)_encodedSize;
- (char)_shouldEncodeData;

@end
