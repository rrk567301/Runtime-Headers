@class NSArray, NSDictionary, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface WLKChannelsResponse : NSObject {
    NSObject<OS_dispatch_queue> *_modificationQueue;
    NSArray *_orderedChannels;
    NSDictionary *_channels;
}

@property (copy, nonatomic) NSDate *expirationDate;
@property (nonatomic) char filtered;
@property (nonatomic) unsigned long long environmentHash;
@property (readonly, nonatomic) NSArray *orderedChannels;
@property (readonly, nonatomic) NSDictionary *channels;

+ (id)parseChannelsFromPayload:(id)a0;

- (void).cxx_destruct;
- (void)setChannels:(id)a0;
- (id)initWithDictionary:(id)a0 expirationDate:(id)a1 environmentHash:(unsigned long long)a2 filtered:(char)a3;
- (char)isValidForFiltered:(char)a0;
- (void)modifyConsentStatusForChannelEntry:(id)a0 consented:(char)a1;
- (void)setOrderedChannels:(id)a0;

@end
