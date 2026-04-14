@class NSString;

@interface HMMTRFileManager : HMFObject <HMMTRFileManager>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)writeDictionary:(id)a0 toURL:(id)a1 error:(id *)a2;
- (id)dictionaryWithContentsOfURL:(id)a0 error:(id *)a1;

@end
