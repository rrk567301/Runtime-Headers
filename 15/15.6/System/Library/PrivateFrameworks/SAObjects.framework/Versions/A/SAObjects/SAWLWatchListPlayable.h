@class NSURL, NSString, SAWLWatchListChannelDetails;

@interface SAWLWatchListPlayable : AceObject <SAAceSerializable>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) SAWLWatchListChannelDetails *channelDetails;
@property (nonatomic) char entitled;
@property (nonatomic) char installed;
@property (copy, nonatomic) NSURL *playURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)watchListPlayable;
+ (id)watchListPlayableWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
