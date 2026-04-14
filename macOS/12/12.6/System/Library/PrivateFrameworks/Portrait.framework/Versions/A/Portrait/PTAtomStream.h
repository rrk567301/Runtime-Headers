@class NSError;
@protocol PTByteStream;

@interface PTAtomStream : NSObject

@property (readonly) unsigned long long atomSize;
@property (readonly) unsigned long long atomDataOffset;
@property (readonly) unsigned long long globalAtomOffset;
@property (readonly) unsigned long long globalEndOffset;
@property (readonly, getter=isAtEndOfStream) BOOL atEndOfStream;
@property (readonly) BOOL didReadAtomVersionAndFlags;
@property (readonly) id<PTByteStream> byteStream;
@property (readonly) PTAtomStream *parentStream;
@property (readonly) BOOL hasAtom;
@property (readonly) unsigned int atomType;
@property (readonly) unsigned long long atomDataSize;
@property (readonly) unsigned long long atomVersion;
@property (readonly) unsigned long long atomFlags;
@property (readonly) NSError *error;

- (id)debugDescription;
- (void).cxx_destruct;
- (void)setError:(id)a0;
- (id)initWithParent:(id)a0;
- (void)readCurrentAtomVersionAndFlags;
- (void)advanceToNextAtom;
- (void)readCurrentAtomDataBytes:(void *)a0 size:(unsigned long long)a1 offset:(unsigned long long)a2;
- (void)_debugLogBytes:(const void *)a0 size:(unsigned long long)a1 offset:(unsigned long long)a2;
- (unsigned long long)globalAtomDataOffset;
- (id)initWithByteStream:(id)a0;
- (id)initWithByteStream:(id)a0 offset:(unsigned long long)a1;
- (void)_readAtomHeader;
- (id)initWithParent:(id)a0 offset:(unsigned long long)a1;
- (void)_debugLogAtomReaderState;
- (void)_setErrorForByteStreamIfNeeded;
- (void)_readBytes:(void *)a0 size:(unsigned long long)a1 offset:(unsigned long long)a2;
- (void)_setEndOfStream;
- (id)_errorForReadPastLimit:(unsigned long long)a0 size:(unsigned long long)a1 offset:(unsigned long long)a2;
- (id)_errorForByteStreamError:(id)a0;

@end
