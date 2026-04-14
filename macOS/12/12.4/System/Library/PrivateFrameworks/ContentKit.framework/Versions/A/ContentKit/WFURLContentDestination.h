@class NSSet, NSString;

@interface WFURLContentDestination : WFContentDestination <NSSecureCoding, NSCopying, WFSerializableContent> {
    NSString *_localizedTitle;
}

@property (class, readonly, nonatomic) WFURLContentDestination *cloudappDestination;
@property (class, readonly, nonatomic) WFURLContentDestination *evernoteDestination;
@property (class, readonly, nonatomic) WFURLContentDestination *giphyDestination;
@property (class, readonly, nonatomic) WFURLContentDestination *imgurDestination;
@property (class, readonly, nonatomic) WFURLContentDestination *instapaperDestination;
@property (class, readonly, nonatomic) WFURLContentDestination *pinboardDestination;
@property (class, readonly, nonatomic) WFURLContentDestination *pocketDestination;
@property (class, readonly, nonatomic) WFURLContentDestination *todoistDestination;
@property (class, readonly, nonatomic) WFURLContentDestination *trelloDestination;
@property (class, readonly, nonatomic) WFURLContentDestination *tumblrDestination;
@property (class, readonly, nonatomic) WFURLContentDestination *wordpressDestination;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSSet *hostnames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)objectWithWFSerializedRepresentation:(id)a0;
+ (id)destinationWithURLs:(id)a0 error:(id *)a1;
+ (id)invalidHostnameErrorForInputURL:(id)a0;
+ (id)destinationWithHostnames:(id)a0;
+ (id)destinationWithHostname:(id)a0;
+ (id)destinationWithURL:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)localizedTitle;
- (id)wfSerializedRepresentation;
- (id)initWithHostnames:(id)a0;
- (id)hostnamesSortedAlphabetically;
- (unsigned long long)managedLevel;

@end
