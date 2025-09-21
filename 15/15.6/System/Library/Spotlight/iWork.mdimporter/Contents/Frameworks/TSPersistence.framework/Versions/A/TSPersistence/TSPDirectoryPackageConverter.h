@interface TSPDirectoryPackageConverter : TSPPackageConverter

- (char)isValid;
- (char)enumeratePackageEntriesWithZipArchive:(id)a0 needsReadChannel:(char)a1 accessor:(id /* block */)a2;
- (char)performAccessor:(id /* block */)a0 filePathCharacterIndex:(unsigned long long)a1 fileURL:(id)a2 needsReadChannel:(char)a3 zipArchive:(id)a4 error:(id *)a5;
- (unsigned long long)progressTotalUnitCountWithZipArchive:(id)a0;

@end
