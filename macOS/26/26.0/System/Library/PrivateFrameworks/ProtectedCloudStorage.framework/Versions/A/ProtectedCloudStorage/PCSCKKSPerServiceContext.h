@class NSString, NSData;

@interface PCSCKKSPerServiceContext : NSObject {
    struct __CFDictionary { } *_rollAttributes;
}

@property (retain) NSString *service;
@property struct _PCSIdentityData { } *currentIdentity;
@property (retain) NSData *currentItemReference;
@property (retain) NSData *existingItemReference;
@property (retain) NSData *existingItemSHA1;
@property struct _PCSIdentityData { } *rollIdentity;
@property (retain) NSData *rollItemReference;
@property (retain) NSData *rollItemSHA1;
@property BOOL roll;
@property BOOL returnedExistingIdentity;
@property int retryLeftCount;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)resetIdentity;
- (void)setCurrentIdentity:(struct _PCSIdentityData { } *)a0 persistentReference:(id)a1;

@end
